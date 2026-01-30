#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct FileStream; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IO_FileAttributes.h"
#include "System_IO_FileMode.h"
namespace mscorlib::System::IO { struct StreamReader; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct MonoIOStat; };
namespace mscorlib::System::IO { struct MonoIOStat; };

namespace mscorlib::System::IO
{
	struct File : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Copy(mscorlib::System::String* sourceFileName, mscorlib::System::String* destFileName, bool overwrite);
		static mscorlib::System::IO::FileStream* Create(mscorlib::System::String* path);
		static mscorlib::System::IO::FileStream* Create(mscorlib::System::String* path, int32_t bufferSize);
		static void Delete(mscorlib::System::String* path);
		static bool Exists(mscorlib::System::String* path);
		static mscorlib::System::IO::FileAttributes GetAttributes(mscorlib::System::String* path);
		static mscorlib::System::IO::FileStream* Open(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode);
		static mscorlib::System::IO::FileStream* OpenRead(mscorlib::System::String* path);
		static mscorlib::System::IO::StreamReader* OpenText(mscorlib::System::String* path);
		static mscorlib::System::IO::FileStream* OpenWrite(mscorlib::System::String* path);
		static void SetAttributes(mscorlib::System::String* path, mscorlib::System::IO::FileAttributes fileAttributes);
		static mscorlib::System::String* ReadAllText(mscorlib::System::String* path, mscorlib::System::Text::Encoding* encoding);
		static void WriteAllBytes(mscorlib::System::String* path, IL2CPP::Array<uint8_t>* bytes);
		static void WriteAllText(mscorlib::System::String* path, mscorlib::System::String* contents);
		static void WriteAllText(mscorlib::System::String* path, mscorlib::System::String* contents, mscorlib::System::Text::Encoding* encoding);
		static int32_t FillAttributeInfo(mscorlib::System::String* path, mscorlib::System::IO::MonoIOStat& data, bool tryagain, bool returnErrorOnNotFound);
	};
}

