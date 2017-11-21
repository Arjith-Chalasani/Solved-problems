import java.util.*;

/**
 * Created by DELL on 05-Nov-17.
 */
public class StackingCups {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int CupCount = input.nextInt();
        Map<String, Integer> Input = new HashMap<>();

        for(int i = 0; i < CupCount; i++){

            String Color = "";
            int Radius = 0;
            if(input.hasNextInt()){
                Radius = input.nextInt();
                Radius = Radius/2;
            }
            else {
                Color = input.next();
            }

            if(Color.isEmpty()){
                Color = input.next();
            }
            else {
                Radius = input.nextInt();
            }
            input.nextLine();
            Input.put(Color, Radius);
        }

        LinkedList<Integer> Values = new LinkedList<>(Input.values());
        Collections.sort(Values);

        for(int i = 0; i < Values.size(); i++){
            int Val = Values.get(i);
            System.out.println(getKeyFromValue(Input, Val));
        }
    }

    public static String getKeyFromValue(Map<String, Integer> Input, Integer Value) {
        for (String Color : Input.keySet()) {
            if (Input.get(Color).equals(Value)) {
                return Color;
            }
        }
        return null;
    }

}
