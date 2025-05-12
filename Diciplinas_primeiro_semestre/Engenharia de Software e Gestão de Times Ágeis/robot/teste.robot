*** Settings ***
Library    SeleniumLibrary

*** Variables ***
${nome}    name:user-name
${senha}    name:password
${logar}    name:login-button

*** Keywords ***
login
    Open Browser    https://www.saucedemo.com/    edge
    Sleep    2s
    Input Text    ${nome}    visual_user
    Sleep    2s
    Input Password    ${senha}    secret_sauce
    Sleep    2s
    Click Element    ${logar}
    Sleep    2s

*** Test Cases ***
site
    login

