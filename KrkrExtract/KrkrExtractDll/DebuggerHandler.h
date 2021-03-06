#pragma once

#include <my.h>
#include "KrkrHeaders.h"
#include "XP3Parser.h"
#include "getopt.h"
#include "KrkrExtract.h"
#include "zlib.h"
#include "MyLib.h"
#include "ml.h"

#pragma comment(lib, "getopt.lib")


PVOID GetTVPCreateStreamCall_Debugger();
tTJSBinaryStream* FASTCALL CallTVPCreateStream_Debugger(const ttstr& FilePath);
IStream* FASTCALL ConvertBStreamToIStream_Debugger(tTJSBinaryStream* BStream);
NTSTATUS FASTCALL DumpXP3ArchiveIndex(LPCWSTR lpFileName, NtFileDisk& file);

///getopt9 lib
NTSTATUS FASTCALL ParseCommand(LPCWSTR lpCmd);

