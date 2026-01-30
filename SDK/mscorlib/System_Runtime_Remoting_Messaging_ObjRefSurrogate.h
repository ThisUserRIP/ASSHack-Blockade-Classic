#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Serialization { struct ISurrogateSelector; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct ObjRefSurrogate : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void GetObjectData(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationInfo* si, mscorlib::System::Runtime::Serialization::StreamingContext sc);
		mscorlib::System::Object* SetObjectData(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationInfo* si, mscorlib::System::Runtime::Serialization::StreamingContext sc, mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector);
		void _ctor();
	};
}

