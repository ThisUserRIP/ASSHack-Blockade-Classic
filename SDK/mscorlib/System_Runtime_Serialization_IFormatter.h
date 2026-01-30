#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization
{
	struct IFormatter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* Deserialize(mscorlib::System::IO::Stream* serializationStream);
		void Serialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Object* graph);
	};
}

