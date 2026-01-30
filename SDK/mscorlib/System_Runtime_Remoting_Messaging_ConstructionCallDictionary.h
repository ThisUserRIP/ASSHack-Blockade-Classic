#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Messaging_MessageDictionary.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IConstructionCallMessage; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct ConstructionCallDictionary : mscorlib::System::Runtime::Remoting::Messaging::MessageDictionary
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* InternalKeys;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* message);
		mscorlib::System::Object* GetMethodProperty(mscorlib::System::String* key);
		void SetMethodProperty(mscorlib::System::String* key, mscorlib::System::Object* value);
		static void _cctor();
	};
}

