#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Int32.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct TermInfoReader; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct StreamReader; };
namespace mscorlib::System::IO { struct CStreamWriter; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Object; };
#include "System_ConsoleColor.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct ByteMatcher; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_ConsoleKeyInfo.h"
namespace mscorlib::System { struct ConsoleKeyInfo; };
#include "System_TermInfoStrings.h"

namespace mscorlib::System
{
	struct TermInfoDriver : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TermInfoReader* reader;
		int32_t cursorLeft;
		int32_t cursorTop;
		mscorlib::System::String* title;
		mscorlib::System::String* titleFormat;
		bool cursorVisible;
		mscorlib::System::String* csrVisible;
		mscorlib::System::String* csrInvisible;
		mscorlib::System::String* clear;
		mscorlib::System::String* bell;
		mscorlib::System::String* term;
		mscorlib::System::IO::StreamReader* stdin_;
		mscorlib::System::IO::CStreamWriter* stdout_;
		int32_t windowWidth;
		int32_t windowHeight;
		int32_t bufferHeight;
		int32_t bufferWidth;
		IL2CPP::Array<wchar_t>* buffer;
		int32_t readpos;
		int32_t writepos;
		mscorlib::System::String* keypadXmit;
		mscorlib::System::String* keypadLocal;
		bool inited;
		mscorlib::System::Object* initLock;
		bool initKeys;
		mscorlib::System::String* origPair;
		mscorlib::System::String* origColors;
		mscorlib::System::String* cursorAddress;
		mscorlib::System::ConsoleColor fgcolor;
		mscorlib::System::String* setfgcolor;
		mscorlib::System::String* setbgcolor;
		int32_t maxColors;
		bool noGetPosition;
		mscorlib::System::Collections::Hashtable* keymap;
		mscorlib::System::ByteMatcher* rootmap;
		int32_t rl_startx;
		int32_t rl_starty;
		IL2CPP::Array<uint8_t>* control_characters;
		IL2CPP::Array<wchar_t>* echobuf;
		int32_t echon;
		struct StaticFields
		{
			int32_t* native_terminal_size;
			int32_t terminal_size;
			IL2CPP::Array<mscorlib::System::String*>* locations;
			IL2CPP::Array<int32_t>* _consoleColorToAnsiCode;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* TryTermInfoDir(mscorlib::System::String* dir, mscorlib::System::String* term);
		static mscorlib::System::String* SearchTerminfo(mscorlib::System::String* term);
		void WriteConsole(mscorlib::System::String* str);
		void _ctor(mscorlib::System::String* term);
		bool get_Initialized();
		void Init();
		void IncrementX();
		void WriteSpecialKey(mscorlib::System::ConsoleKeyInfo key);
		void WriteSpecialKey(wchar_t c);
		bool IsSpecialKey(mscorlib::System::ConsoleKeyInfo key);
		bool IsSpecialKey(wchar_t c);
		void GetCursorPosition();
		void CheckWindowDimensions();
		int32_t get_WindowHeight();
		int32_t get_WindowWidth();
		void AddToBuffer(int32_t b);
		void AdjustBuffer();
		mscorlib::System::ConsoleKeyInfo CreateKeyInfoFromInt(int32_t n, bool alt);
		mscorlib::System::Object* GetKeyFromBuffer(bool cooked);
		mscorlib::System::ConsoleKeyInfo ReadKeyInternal(bool& fresh);
		bool InputPending();
		void QueueEcho(wchar_t c);
		void Echo(mscorlib::System::ConsoleKeyInfo key);
		void EchoFlush();
		int32_t Read(IL2CPP::Array<wchar_t>* dest, int32_t index, int32_t count);
		mscorlib::System::ConsoleKeyInfo ReadKey(bool intercept);
		mscorlib::System::String* ReadLine();
		mscorlib::System::String* ReadToEnd();
		mscorlib::System::String* ReadUntilConditionInternal(bool haltOnNewLine);
		void SetCursorPosition(int32_t left, int32_t top);
		void CreateKeyMap();
		void InitKeys();
		void AddStringMapping(mscorlib::System::TermInfoStrings s);
		static void _cctor();
	};
}

