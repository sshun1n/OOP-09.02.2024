namespace dawg
{
    public partial class Form1 : Form
    {

        Dog yuki = new Dog("���");

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("C:\\coding\\�#\\dawg\\dawg\\assets\\2dog.gif");
            pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;

            barkButton.Text = "��������";

            barkLabel.Text = "";
            barkLabel.Font = new Font("Serif", 10, FontStyle.Bold);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            yuki.DogBark("C:\\coding\\�#\\dawg\\dawg\\assets\\dog8.wav");

            barkLabel.Text = yuki.GetDogName() + " ��������!";

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
