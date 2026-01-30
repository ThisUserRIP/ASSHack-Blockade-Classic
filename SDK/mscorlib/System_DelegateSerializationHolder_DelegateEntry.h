#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_DelegateSerializationHolder.h"
namespace mscorlib::System { struct DelegateSerializationHolder; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System
{
	struct DelegateSerializationHolder_DelegateEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* type;
		mscorlib::System::String* assembly;
		mscorlib::System::Object* target;
		mscorlib::System::String* targetTypeAssembly;
		mscorlib::System::String* targetTypeName;
		mscorlib::System::String* methodName;
		mscorlib::System::DelegateSerializationHolder_DelegateEntry* delegateEntry;
		void _ctor(mscorlib::System::Delegate* del, mscorlib::System::String* targetLabel);
		mscorlib::System::Delegate* DeserializeDelegate(mscorlib::System::Runtime::Serialization::SerializationInfo* info, int32_t index);
	};
}

