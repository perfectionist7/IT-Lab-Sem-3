using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace myproject
{
    public partial class Form1 : Form
    {

        string input = string.Empty;
        string op1 = string.Empty;
        string op2 = string.Empty;
        char Operator;
        double res = 0.0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "1";
            this.textBox1.Text += input;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "2";
            this.textBox1.Text += input;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "3";
            this.textBox1.Text += input;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "4";
            this.textBox1.Text += input;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "5";
            this.textBox1.Text += input;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "6";
            this.textBox1.Text += input;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "7";
            this.textBox1.Text += input;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "8";
            this.textBox1.Text += input;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "9";
            this.textBox1.Text += input;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input = input + "0";
            this.textBox1.Text += input;
        }

        private void button11_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = '+';
            input = string.Empty;

        }

        private void button12_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = '-';
            input = string.Empty;
        }

        private void button13_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = 'X';
            input = string.Empty;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = '/';
            input = string.Empty;
        }

        private void button16_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = '^';
            input = string.Empty;
        }

        private void button17_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = 'i';
            input = string.Empty;
        }

        private void button18_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = 's';
            input = string.Empty;
        }

        private void button19_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = 't';
            input = string.Empty;
        }

        private void button20_Click(object sender, EventArgs e)
        {
            op1 = string.Empty;
            op2 = string.Empty;
            input = string.Empty;
            this.textBox1.Text = string.Empty;
        }

        private void button21_Click(object sender, EventArgs e)
        {
            op1 = input;
            Operator = '%';
            input = string.Empty;
        }

        private void button15_Click(object sender, EventArgs e)
        {
            op2 = input;
            double num1, num2;
            double.TryParse(op1, out num1);
            double.TryParse(op2, out num2);

            if (Operator == '+')
            {
                res = num1 + num2;
                this.textBox1.Text = res.ToString();
            }

            else if (Operator == '-')
            {
                res = num1 - num2;
                this.textBox1.Text = res.ToString();
            }

            else if (Operator == 'X')
            {
                res = num1 * num2;
                this.textBox1.Text = res.ToString();
            }

            else if (Operator == '/')
            {
                if (num2 != 0)
                {
                    res = num1 / num2;
                    this.textBox1.Text = res.ToString();
                }

                else
                {
                    textBox1.Text = "division by zero!!!";
                }
            }

            else if (Operator == '^')
            {
                res = Math.Pow(num1,num2);
                this.textBox1.Text = res.ToString();
            }

            else if (Operator == 'i')
            {
                if (num1 != 0)
                {
                    res = 1 / num1;
                    this.textBox1.Text = res.ToString();
                }

                else
                {
                    textBox1.Text = "infinity";
                }
            }

            else if (Operator == 's')
            {
                res = num1 * num1;
                this.textBox1.Text = res.ToString();
            }

            else if (Operator == 't')
            {
                res = Math.Pow(10, num1);
                this.textBox1.Text = res.ToString();
            }

            else if (Operator == '%')
            {
                res = (num1 * num2) / 100;
                this.textBox1.Text = res.ToString();
            }

            input = string.Empty;
        }
    }
}
