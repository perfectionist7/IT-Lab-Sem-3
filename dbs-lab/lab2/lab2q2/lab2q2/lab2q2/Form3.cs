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
    public partial class Form3 : Form
    {
        string user1 = "Ayush";
        string user2 = "Kushagra";
        string user;
        int bal1 = 5000000;
        int bal2 = 200000;
        int amount;
        public Form3(string usr)
        {
            InitializeComponent();
            user = usr;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label6.Text = "TRANSFER SUCCESSFUL";
            if (user == user1) {
                amount = int.Parse(textBox3.Text);
                bal1 = bal1 - amount;
                textBox4.Text = bal1.ToString();
            }

            if (user == user2)
            {
                amount = int.Parse(textBox3.Text);
                bal2 = bal2 - amount;
                textBox4.Text = bal2.ToString();
            }
        }

        private void label7_Click(object sender, EventArgs e)
        {

        }

        private void Form3_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
