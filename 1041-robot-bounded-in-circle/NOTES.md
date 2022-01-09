​So, suppose we have a 2 dimensional grid we have. WIth an instruction of "GGLLGG". which states go-go | turn to left 90 degree-turn to left 90 degree | go-go. If we gonna repeat forever, we will get stuck in an infinite loop for now..

Let's kind of simulate it 1st, we intially start at the origin. And let's have our direction facing North intially we are facing north, we gonna move twice and still facing North so, what happen is we move by 1, then move by 2 we gonna be in this position still facing North.
And then we turn left twice. So, if we turn left 1 90 degree we will be facing Left, if we do twice then we are facing Down.
Then, we go-go. Go, down 1 - Go down 2 and we start back at the origin. The only difference is now, instead of facing North we are facing South. But, obviously we get back to start.

Now you can ask, can we go for an another loop. Just as we did before? My answer is YES, this path is some kind of a Vector on this 2 dimensional grid. So, in the above case the vector was Up by 2 & then went staright down by 2. So, in total the vector was a net difference of "0" So, basically it started where it's end.

Even though, first we facing North, now we facing South, it's gonna follow that same path. It's gonna move by 2 and go back in same direction it's came from. Because this Vector is a "0" vector doesn't move any where.
