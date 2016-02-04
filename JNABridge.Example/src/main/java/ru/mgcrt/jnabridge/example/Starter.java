package ru.mgcrt.jnabridge.example;

import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.file.Paths;
import javax.xml.bind.DatatypeConverter;

/**
 *
 * @author myagincourt
 */
public class Starter {
    
    //Native declaration
    private static native String getData(String input);
    
    public static void main(String[] args) {
        
        /*
        * When loading the library, x64 JVM requires x64 compiled dlls
        */        
        String relativeDllPAth = 
                Paths.get(".").toAbsolutePath().normalize().toString()
                    .replace("JNABridge.Example", "x64\\Debug\\JNABridge.Wrapper.dll");
        
        System.load(relativeDllPAth);
        
        // Let's get some resource from CLR asembly
        String filename = "example";
        
        String b64Input = DatatypeConverter.printBase64Binary(filename.getBytes());
        
        // Execute native function
        String data = getData(b64Input);
        
        // Save resource to desktop
        byte[] fileContents = DatatypeConverter.parseBase64Binary(data);
        try {
            FileOutputStream fos = new FileOutputStream(
                    System.getProperty("user.home") + "/Desktop/" + filename + ".pdf");
            fos.write(fileContents);
            fos.close();
        } catch (IOException ex) {
            ex.printStackTrace();
        }        
    }
    
}
