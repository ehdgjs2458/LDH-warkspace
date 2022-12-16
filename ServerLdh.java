import java.io.*;
import java.net.*;
import java.util.*;

public class ServerLdh {
	public static void main(String[] args) {
		BufferedReader in = null;
		BufferedWriter out = null;
		ServerSocket listener = null;
		Socket socket = null;
		Scanner sc = new Scanner(System.in); 
		try {
			listener = new ServerSocket(9999); 
			System.out.println("loding");
			socket = listener.accept(); 
			System.out.println("complete");
			in = new BufferedReader(new InputStreamReader(socket.getInputStream())); 
			out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream())); 
			while (true) {
				String inputMessage = in.readLine(); 
				if (inputMessage.equalsIgnoreCase("bye")) {
					System.out.println("client was close"); 
					break;  
				}
				System.out.println("Client: " + inputMessage); 
				System.out.print("send>>");
				String outputMessage = sc.nextLine(); 
				out.write(outputMessage + "\n"); 
				out.flush();
			}
		} catch (IOException e) {
			System.out.println(e.getMessage());
		} finally {
			try {
				sc.close(); 
				socket.close(); 
				listener.close(); 
			} catch (IOException e) {
				System.out.println("error");
			}
		}
	}
}
