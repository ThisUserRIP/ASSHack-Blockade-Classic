#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_MonoChunkStream.h"
namespace System::System::Net { struct MonoChunkStream; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct MonoChunkStream_Chunk : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* Bytes;
		int32_t Offset;
		void _ctor(IL2CPP::Array<uint8_t>* chunk);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
	};
}

