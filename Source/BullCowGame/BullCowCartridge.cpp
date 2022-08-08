// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcoming the Player
    PrintLine(TEXT("Entry Message for Bull Cow Game"));
    PrintLine(TEXT("Guess word of length 4"));
    PrintLine(TEXT("Request for player input before pressing enter"));

    // Setting up Game
    HiddenWord = TEXT("testWord");
    // Set Lives

    // Prompt Player For Guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    
    // Checking PlayerGuess

    if(Input == HiddenWord) {
        PrintLine(TEXT("Yep"));
    }
    else {
        PrintLine(TEXT("Nope"));
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