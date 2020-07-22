#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: bus
//  action 1: the bus stops
bus.stop();
//  action 2: the bus goes
bus.go();
//  action 3: the bus speeds up
 bus.speedUp();
//  2)
//  Noun:song
//  action 1: the song plays
song.play();
//  action 2: the volume goes up
song.raiseVolume();
//  action 3: the volume goes down
song.lowerVolume();
//  3)
//  Noun: Color
//  action 1: set random color
color.setRandom();
//  action 2:inverts color
color.invert();
//  action 3:sets rgb values to 0,0,0
 color.reset();
//  4)
//  Noun:Artist
//  action 1:paints
artist.paint();
//  action 2: sculpts
artist.sculpt();
//  action 3: draws
 artist.draw();
//  5)
//  Noun: boat
//  action 1:drops the boats anchor
boat.dropAnchor();
//  action 2: turns the rudder clockwise
boat.rudderClockWise();
//  action 3: prepares to enter a port
boat.portPrepare();
//  6)
//  Noun:rapper
//  action 1:raps
rapper.rap();
//  action 2:writes song
rapper.songWrite():
//  action 3:sings
 rapper.sing();
//  7)
//  Noun:chef
//  action 1:gets food
chef.getFood();
//  action 2:prepare ingredients
chef.ingredientPrep();
//  action 3:cooks
chef.cook();
//  8)
//  Noun:Journalist
//  action 1:research
journalist.research();
//  action 2:publish story
journalist.publishStory();
//  action 3:write story
journalist.writeStory();
//  9)
//  Noun:street
//  action 1:get distance of street
street.getDistance();
//  action 2:turn on streetlights
street.illuminate();
//  action 3:get weight of vehicle on street
 street.getWeight();
//  10)
//  Noun:list
//  action 1:count items in list
list.count();
//  action 2:add a row to list
list.addRow();
//  action 3:delete
list.delete();

 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
