import java.io.*;
import java.net.*;
import java.util.*;

public class CalcServerLdh {
	public static String calc(String exp) {
		StringTokenizer st = new StringTokenizer(exp, " ");
		if (st.countTokens() != 3) return "error";

		String res="";
		int op1 = Integer.parseInt(st.nextToken());
		String opcode = st.nextToken();
		int op2 = Integer.parseInt(st.nextToken());
		switch (opcode) {
			case "+": res = Integer.toString(op1 + op2);
				break;
			case "-": res = Integer.toString(op1 - op2);
				break;
			case "*": res = Integer.toString(op1 * op2);
				break;
			default : res = "error";
		}
		return res;
	}

	public static void main(String[] args) {
		BufferedReader in = null;
		BufferedWriter out = null;
		ServerSocket listener = null;
		Socket socket = null;
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
				System.out.println(inputMessage); 
				String res = calc(inputMessage);
				out.write(res + "\n"); 
				out.flush();
			}
		} catch (IOException e) {
			System.out.println(e.getMessage());
		} finally {
			try {
				if(socket != null) socket.close();
				if(listener != null) listener.close(); 
			} catch (IOException e) {
				System.out.println("error");
			}
		}
	}
}