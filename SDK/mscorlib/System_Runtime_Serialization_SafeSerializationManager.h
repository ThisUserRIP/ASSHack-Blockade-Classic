#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System::Runtime::Serialization { struct SafeSerializationEventArgs; };
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Serialization
{
	struct SafeSerializationManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Object>* m_serializedStates;
		mscorlib::System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo;
		mscorlib::System::Object* m_realObject;
		mscorlib::System::RuntimeType* m_realType;
		mscorlib::System::EventHandler_1<mscorlib::System::Runtime::Serialization::SafeSerializationEventArgs>* SerializeObjectState;
		struct StaticFields
		{
			mscorlib::System::String* RealTypeSerializationName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool get_IsActive();
		void CompleteSerialization(mscorlib::System::Object* serializedObject, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void CompleteDeserialization(mscorlib::System::Object* deserializedObject);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Object* System_Runtime_Serialization_IObjectReference_GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context);
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext context);
	};
}

