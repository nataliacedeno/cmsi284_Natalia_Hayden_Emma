import java.util.Scanner;

public class NATO {
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter word: ");
        String word = input.nextLine();
        input.close();

        String[] nato = new String[]{"ALFA", "BRAVO", "CHARLIE", "DELTA", "ECHO", "FOXTROT", "GOLF", "HOTEL", "INDIA", "JULIETT", "KILO", "LIMA", "MIKE", "NOVEMBER", "OSCAR", "PAPA", "QUEBEC", "ROMEO", "SIERRA", "TANGO", "UNIFORM", "VICTOR", "WHISKEY", "XRAY", "YANKEE", "ZULU"};
        String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char[] ch = word.toUpperCase().toCharArray();

        for (char c:ch) {
            
        }
    }
}