{#include &lt;stdlib.h&gt;

#include &lt;time.h&gt;

#include &lt;stdio.h&gt;

	/**
	 *
	 * *main -&gt; assign a random number to the variable n each time it is executed
	 *
	 * *and print the last digit of the number stored in the variable n
	 *
	 * *Return: Always 0 (Success)
	 *
	 * */

	int main(void)

	{

		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		if (n &gt; 0)

			printf(&quot;%d is positive\n&quot;, n);

		if (n == 0)

			printf(&quot;%d is zero\n&quot;, n);

		if (n &lt; 0)

			printf(&quot;%d is negative\n&quot;, n);

	}

	return (0);

}
