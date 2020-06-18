

 
    
        import java.util.*;
public class Main {
    public static int maximalRectangle(int[][] matrix) {
        int height = matrix.length;
        if (height == 0) {
            return 0;
        }
        int width = matrix[0].length;

        int maximal = 0;
        int[] left = new int[width];
        int[] right = new int[width];
        int[] heights = new int[width];
        Arrays.fill(right, width - 1);

        for (int i = 0; i < height; i++) {
            int currentLeft = 0;
            int currentRight = width - 1;

            for (int j = 0; j < width; j++) {
                if (matrix[i][j] == 0) {
                    currentLeft = j + 1;
                    left[j] = 0;
                    heights[j] = 0;
                } else {
                    left[j] = Math.max(currentLeft, left[j]);
                    heights[j]++;
                }
            }
            for (int j = width - 1; j >= 0; j--) {
                if (matrix[i][j] == 0) {
                    currentRight = j - 1;
                    right[j] = width - 1;
                } else {
                    right[j] = Math.min(currentRight, right[j]);
                }
            }

            for (int j = 0; j < width; j++) {
                maximal = Math.max(maximal, (right[j] - left[j] + 1) * heights[j]);
            }
        }
        return maximal;
    }
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();

        int[][] matrix = new int[n][m];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                matrix[i][j] = in.nextInt();
            }
        }
        System.out.println(maximalRectangle(matrix));
    }
}
    

