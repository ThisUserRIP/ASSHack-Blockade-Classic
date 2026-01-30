#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationEventHandler; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Serialization
{
	struct SerializationObjectManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* m_objectSeenTable;
		mscorlib::System::Runtime::Serialization::SerializationEventHandler* m_onSerializedHandler;
		mscorlib::System::Runtime::Serialization::StreamingContext m_context;
		void _ctor(mscorlib::System::Runtime::Serialization::StreamingContext context);
		void RegisterObject(mscorlib::System::Object* obj);
		void RaiseOnSerializedEvent();
		void AddOnSerialized(mscorlib::System::Object* obj);
	};
}

