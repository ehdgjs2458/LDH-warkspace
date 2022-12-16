import java.io.*;
import java.util.*;
public class BinaryCopyLdh {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      String name, name1;
      System.out.print("copy file name : ");
      name1 = sc.nextLine();;
      System.out.print("save file name : ");
      name = sc.nextLine();
      File src = new File("c:\\Temp\\"+name1+".jpg"); // 원본 파일
      File dest = new File("c:\\Temp\\"+name+".jpg"); // 복사 파일

      int c;
      try {
         FileInputStream fi = new FileInputStream(src);  // 파일 입력 바이트 스트림 생성
         FileOutputStream fo = new FileOutputStream(dest); // 파일 출력 바이트 스트림 생성
         while((c = fi.read()) != -1) {
            fo.write((byte)c);
         }
            fi.close();
            fo.close();
            sc.close();
            System.out.println("Copied "+src.getPath()+ " to " + dest.getPath());
      } catch (IOException e) {
         System.out.println("error");
      }
   }

}