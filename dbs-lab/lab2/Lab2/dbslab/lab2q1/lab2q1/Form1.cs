using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace lab2q1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void nEWToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox1.Clear();
        }

        private void oPENToolStripMenuItem_Click(object sender, EventArgs e)
        {
            OpenFileDialog dlg = new OpenFileDialog(); dlg.Title = "Open";
            dlg.ShowDialog();
            string fName = dlg.FileName;
            StreamReader sr = new StreamReader(fName); 
            richTextBox1.Text = sr.ReadToEnd(); 
            sr.Close();
        }

        private void sAVEToolStripMenuItem_Click(object sender, EventArgs e)
        {
            saveFileDialog1.ShowDialog();
            string fName = saveFileDialog1.FileName; 
            StreamWriter sw = new StreamWriter(fName); 
            sw.Write(richTextBox1.Text);
            sw.Flush();
            sw.Close();
        }

        private void eXITToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void cUTToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox1.Cut();
        }

        private void cOPYToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox1.Copy();
        }

        private void pASTEToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox1.Paste();
        }

        private void fONTToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (fontDialog1.ShowDialog() == DialogResult.OK)
            {
                richTextBox1.Font = fontDialog1.Font;
            }
        }

        private void cOLOURToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                richTextBox1.ForeColor = colorDialog1.Color;
            }
        }

        private void uNDOToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox1.Undo();
        }

        private void rEDOToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox1.Redo();
        }
    }
}
