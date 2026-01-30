#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationEventHandler; };

namespace mscorlib::System::Runtime::Serialization
{
	struct SerializationEvents : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::MethodInfo>* m_OnSerializingMethods;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::MethodInfo>* m_OnSerializedMethods;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::MethodInfo>* m_OnDeserializingMethods;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::MethodInfo>* m_OnDeserializedMethods;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::MethodInfo>* GetMethodsWithAttribute(mscorlib::System::Type* attribute, mscorlib::System::Type* t);
		void _ctor(mscorlib::System::Type* t);
		bool get_HasOnSerializingEvents();
		void InvokeOnSerializing(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void InvokeOnDeserializing(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void InvokeOnDeserialized(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationEventHandler* handler);
		mscorlib::System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationEventHandler* handler);
	};
}

