using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ex09_06_MessageBoxDefaultButtonApp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("MessageBoxDefaultButton", "Title Bar",
                         MessageBoxButtons.YesNoCancel,
                         MessageBoxIcon.Question,
                         MessageBoxDefaultButton.Button2);
        }
    }
}
