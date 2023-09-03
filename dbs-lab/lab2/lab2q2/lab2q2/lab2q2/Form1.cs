using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab2q2
{
    public partial class Form1 : Form
    {
        string user1 = "Ayush";
        string user2 = "Kushagra";
        string psd1 = "1234";
        string psd2 = "4567";
        TextBox usernameentered;
        TextBox passwordentered;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            usernameentered = textBox1;
            passwordentered = textBox2;
            if ((usernameentered.Text == user1 && passwordentered.Text == psd1) || (usernameentered.Text == user2 && passwordentered.Text == psd2))
            {
                label4.Text = "valid credentials";
                Form2 f2 = new Form2(usernameentered.Text);
                f2.Show();
            }
            else {
                label4.Text = "invalid credentials";
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
