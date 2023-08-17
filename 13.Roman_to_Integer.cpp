class Solution
{
public:
    int romanToInt(string s)
    {
        int roma[5000] = {}; // init_array
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
                roma[i] = 1;
            if (s[i] == 'V')
                roma[i] = 2;
            if (s[i] == 'X')
                roma[i] = 3;
            if (s[i] == 'L')
                roma[i] = 4;
            if (s[i] == 'C')
                roma[i] = 5;
            if (s[i] == 'D')
                roma[i] = 6;
            if (s[i] == 'M')
                roma[i] = 7;
        } // compare

        for (int i = 0; i < s.length(); i++)
        {
            if (roma[i] == 1)
            {
                if (roma[i] < roma[i + 1])
                {
                    if (roma[i + 1] == 2)
                        sum += 4;
                    else
                        sum += 9;
                    i++;
                }
                else
                    sum += 1;
            }

            else if (roma[i] == 2)
            {
                sum += 5;
            }

            else if (roma[i] == 3)
            {
                if (roma[i] < roma[i + 1])
                {
                    if (roma[i + 1] == 4)
                        sum += 40;
                    else
                        sum += 90;
                    i++;
                }
                else
                    sum += 10;
            }

            else if (roma[i] == 4)
            {
                sum += 50;
            }

            else if (roma[i] == 5)
            {
                if (roma[i] < roma[i + 1])
                {
                    if (roma[i + 1] == 6)
                        sum += 400;
                    else
                        sum += 900;
                    i++;
                }
                else
                    sum += 100;
            }

            else if (roma[i] == 6)
            {
                sum += 500;
            }

            else if (roma[i] == 7)
            {
                sum += 1000;
            }
        }
        return sum;
    }
};