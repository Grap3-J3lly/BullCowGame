// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame(); 

    //PrintLine(FString::Printf(TEXT("The Hidden Word is: %s"), *HiddenWord)); // Debug Line

    // Welcoming the Player
    PrintLine(TEXT("Entry Message for Bull Cow Game"));
    PrintLine(FString::Printf(TEXT("Guess word has %i characters."), HiddenWord.Len()));
    PrintLine(TEXT("Request for player input \nbefore pressing enter"));

    // Prompt Player For Guess
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();

    // If game is over, clear screen and setup the game
    // else check PlayerGuess

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("Yep"));
        bGameOver = true;
    }
    else
    {
        if(Input.Len() != HiddenWord.Len())
        {
            PrintLine(FString::Printf(TEXT("The Hidden word has %i characters."), HiddenWord.Len()));
        }
        
        PrintLine(TEXT("You Lose."));
        bGameOver = true;
    }

    // Check If Isogram
    // Prompt to GuessAgain
    // Check Right Number Of Characters
    // Prompt to GuessAgain

    // Remove Life

    // Check If Lives > 0
    // If Yes GuessAgain
    // Show Lives Left
    // If No show GameOver and HiddenWord
    // Prompt to PlayAgain
    // Check User Input
    // PlayAgain or Quit
}

void UBullCowCartridge::SetupGame()
{
    bGameOver = false;
    HiddenWord = TEXT("testWord");
    Lives = 4;
}

void UBullCowCartridge::EndGame()
{
    
}