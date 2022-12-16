import java.io.*;
import java.util.*;
public class TextCopyLdh {
   public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      String name, name1;
      System.out.print("파일이름을 입력하시오 : ");
      name1 = sc.nextLine();
      System.out.print("복사할 파일이름을 입력하시오 : ");
      name = sc.nextLine();
      File src = new File("c:\\windows\\"+name1); // 원본 파일
      File dest = new File("c:\\Temp\\"+name); // 복사 파일

      int c;
      try {
         FileReader fr = new FileReader(src); // 파일 입력 문자 스트림에 연결
         FileWriter fw = new FileWriter(dest); // 파일 출력 문자 스트림에 연결
         while ((c = fr.read()) != -1) { // 문자 하나 읽고
            fw.write((char)c); // 문자 하나 쓰고
         }
            fr.close();
            fw.close();
            System.out.println("Copied"+src.getPath()+ " to " + dest.getPath());
            sc.close();
      } catch (IOException e) {
         System.out.println("파일 복사 오류");
      }
   }
}
