#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Runtime_Serialization_Formatters_Binary_BinaryHeaderEnum.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryWriter; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryParser; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct SerializationHeaderRecord : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t binaryFormatterMajorVersion;
		int32_t binaryFormatterMinorVersion;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
		int32_t topId;
		int32_t headerId;
		int32_t majorVersion;
		int32_t minorVersion;
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId, int32_t headerId, int32_t majorVersion, int32_t minorVersion);
		void Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
		static int32_t GetInt32(IL2CPP::Array<uint8_t>* buffer, int32_t index);
		void Read(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
		void Dump();
	};
}

