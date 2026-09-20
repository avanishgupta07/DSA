class Solution {
public:
    int reverseDegree(string str) {
        int ans = 0;

        int a = 26, b = 25, c = 24, d = 23, e = 22, f = 21, g = 20, h = 19,
            i = 18, j = 17, k = 16, l = 15, m = 14, n = 13, o = 12, p = 11,
            q = 10, r = 9, s = 8, t = 7, u = 6, v = 5, w = 4, x = 3, y = 2,
            z = 1;

        for (int i1 = 0; i1 < str.length(); i1++) {
            if (str[i1] == 'a')
                ans += (i1 + 1) * a;
            else if (str[i1] == 'b')
                ans += (i1 + 1) * b;
            else if (str[i1] == 'c')
                ans += (i1 + 1) * c;
            else if (str[i1] == 'd')
                ans += (i1 + 1) * d;
            else if (str[i1] == 'e')
                ans += (i1 + 1) * e;
            else if (str[i1] == 'f')
                ans += (i1 + 1) * f;
            else if (str[i1] == 'g')
                ans += (i1 + 1) * g;
            else if (str[i1] == 'h')
                ans += (i1 + 1) * h;
            else if (str[i1] == 'i')
                ans += (i1 + 1) * i;
            else if (str[i1] == 'j')
                ans += (i1 + 1) * j;
            else if (str[i1] == 'k')
                ans += (i1 + 1) * k;
            else if (str[i1] == 'l')
                ans += (i1 + 1) * l;
            else if (str[i1] == 'm')
                ans += (i1 + 1) * m;
            else if (str[i1] == 'n')
                ans += (i1 + 1) * n;
            else if (str[i1] == 'o')
                ans += (i1 + 1) * o;
            else if (str[i1] == 'p')
                ans += (i1 + 1) * p;
            else if (str[i1] == 'q')
                ans += (i1 + 1) * q;
            else if (str[i1] == 'r')
                ans += (i1 + 1) * r;
            else if (str[i1] == 's')
                ans += (i1 + 1) * s;
            else if (str[i1] == 't')
                ans += (i1 + 1) * t;
            else if (str[i1] == 'u')
                ans += (i1 + 1) * u;
            else if (str[i1] == 'v')
                ans += (i1 + 1) * v;
            else if (str[i1] == 'w')
                ans += (i1 + 1) * w;
            else if (str[i1] == 'x')
                ans += (i1 + 1) * x;
            else if (str[i1] == 'y')
                ans += (i1 + 1) * y;
            else if (str[i1] == 'z')
                ans += (i1 + 1) * z;
        }

        return ans;
    }
};
