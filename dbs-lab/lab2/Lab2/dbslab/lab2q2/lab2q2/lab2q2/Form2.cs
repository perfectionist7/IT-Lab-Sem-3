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
    public partial class Form2 : Form
    {
        string user1 = "Kushagra";
        string user2 = "Nischay";
        int bal1 = 50000000;
        int bal2 = 200000;
        public Form2(string usr)
        {
            InitializeComponent();
            if (usr == user1) {
                textBox1.Text = user1;
                textBox2.Text = bal1.ToString();
            }

            if (usr == user2)
            {
                textBox1.Text = user2;
                textBox2.Text = bal2.ToString();
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form3 f3 = new Form3(textBox1.Text);
            f3.Show();
        }
    }
}
