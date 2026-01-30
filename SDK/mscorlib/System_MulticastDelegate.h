#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Delegate.h"
namespace mscorlib::System { struct Delegate; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct MethodInfo; };

namespace mscorlib::System
{
	struct MulticastDelegate : mscorlib::System::Delegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Delegate*>* delegates;
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::Reflection::MethodInfo* GetMethodImpl();
		IL2CPP::Array<mscorlib::System::Delegate*>* GetInvocationList();
		mscorlib::System::Delegate* CombineImpl(mscorlib::System::Delegate* follow);
		int32_t LastIndexOf(IL2CPP::Array<mscorlib::System::Delegate*>* haystack, IL2CPP::Array<mscorlib::System::Delegate*>* needle);
		mscorlib::System::Delegate* RemoveImpl(mscorlib::System::Delegate* value);
	};
}

