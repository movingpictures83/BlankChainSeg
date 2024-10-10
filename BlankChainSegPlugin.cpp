#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BlankChainSegPlugin.h"

void BlankChainSegPlugin::input(std::string file) {
 inputfile = file;
}

void BlankChainSegPlugin::run() {}

void BlankChainSegPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "pdb_blank_chain-segid";
myCommand += " ";
myCommand += inputfile + " > ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BlankChainSegPlugin> BlankChainSegPluginProxy = PluginProxy<BlankChainSegPlugin>("BlankChainSeg", PluginManager::getInstance());
