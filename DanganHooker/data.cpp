#include "Data.h"
#include "Scripting.h"
#include "File.h"
#include "MemoryAddresses.h"

using namespace std; 

string Data::GamePath;
string Data::ModName = "MyFirstMod";

int Data::Game = -1;

const Data::DetourInfo Data::DanganDetourInfo[2] =
{
	{Dr1Addresses::FILE_PATH_START, Dr1Addresses::FILE_PATH_END, File::GetFilePath, "FUNC_FILE_GETPATH"},
	{Dr1Addresses::OPCODE_START, Dr1Addresses::OPCODE_END, Scripting::GetOperationFunction, "INST_SCRIPTING_GET_OPFUNC"}
};
const Data::DetourInfo Data::Dangan2DetourInfo[3] = 
{
	{Dr2Addresses::VOICELINE_START, Dr2Addresses::VOICELINE_END,  Sound::VoiceLineMaths,  "FUNC_SOUND_VOICEMATH"},
	{Dr2Addresses::OPCODE_START, Dr2Addresses::OPCODE_END, Scripting::GetOperationFunction, "INST_SCRIPTING_GET_OPFUNC"},
	{Dr2Addresses::FILE_PATH_START, Dr2Addresses::FILE_PATH_END, File::GetFilePath, "FUNC_FILE_GETPATH"}
};




