#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryWriter; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryParser; };
namespace mscorlib::System::IO { struct Stream; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct MessageEnd : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
		void Read(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
		void Dump();
		void Dump(mscorlib::System::IO::Stream* sout);
	};
}

