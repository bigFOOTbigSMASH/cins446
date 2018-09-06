/*
 * Student A, Student B
 * CSCI 446
 * Term
 *
 * This template provides the framework you need for program 1. Complete the functions
 * defined and create any you feel are neccessary. stream-talk-client.c on Learn will
 * prove useful.
 */

#include <sys/types.h>
#include <sys/socket.h>

#define SERVER_NAME "www.ecst.csuchico.edu"
#define SERVER_PORT "80"
#define REQUEST "GET /~kkredo/file.html HTTP/1.0\r\n\r\n"
#define SEARCH_TAG "<p>"

/*
 * Arguments: same as recv(2)
 * Return:-1 on error or bytes received
 *
 * Receive len bytes of data into array buf from socket sockfd. Always receive len bytes
 * of data unless the socket closes. The return value will fall into one of three cases:
 *   (1) on success the return value equals len
 *   (2) on error the return value equals -1
 *   (3) if the socket closes without receiving len bytes, then return the number
 *       actually received, which may be zero
 */
ssize_t recvall( int sockfd, void *buf, size_t len );

int main( int argc, char *argv[] ) {

	/* Call recvall in here ... */

	return 0;
}

ssize_t recvall( int sockfd, void *buf, size_t len ) {

	/*
	 * Define recvall to return exactly len bytes unless an error occurs or the socket
	 * closes. Do not count tags in recvall!
	 */
	return 0;
}
