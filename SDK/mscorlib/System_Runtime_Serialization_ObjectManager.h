#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Serialization { struct DeserializationEventHandler; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationEventHandler; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectHolder; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectHolderList; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Runtime::Serialization { struct ISurrogateSelector; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization { struct FixupHolder; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct RuntimeConstructorInfo; };
namespace mscorlib::System { struct RuntimeType; };

namespace mscorlib::System::Runtime::Serialization
{
	struct ObjectManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler;
		mscorlib::System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler;
		IL2CPP::Array<mscorlib::System::Runtime::Serialization::ObjectHolder*>* m_objects;
		mscorlib::System::Object* m_topObject;
		mscorlib::System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects;
		int64_t m_fixupCount;
		mscorlib::System::Runtime::Serialization::ISurrogateSelector* m_selector;
		mscorlib::System::Runtime::Serialization::StreamingContext m_context;
		void _ctor(mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector, mscorlib::System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain);
		bool CanCallGetType(mscorlib::System::Object* obj);
		void set_TopObject(mscorlib::System::Object* value);
		mscorlib::System::Object* get_TopObject();
		mscorlib::System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects();
		mscorlib::System::Runtime::Serialization::ObjectHolder* FindObjectHolder(int64_t objectID);
		mscorlib::System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(int64_t objectID);
		void AddObjectHolder(mscorlib::System::Runtime::Serialization::ObjectHolder* holder);
		bool GetCompletionInfo(mscorlib::System::Runtime::Serialization::FixupHolder* fixup, mscorlib::System::Runtime::Serialization::ObjectHolder& holder, mscorlib::System::Object& member, bool bThrowIfMissing);
		void FixupSpecialObject(mscorlib::System::Runtime::Serialization::ObjectHolder* holder);
		bool ResolveObjectReference(mscorlib::System::Runtime::Serialization::ObjectHolder* holder);
		bool DoValueTypeFixup(mscorlib::System::Reflection::FieldInfo* memberToFix, mscorlib::System::Runtime::Serialization::ObjectHolder* holder, mscorlib::System::Object* value);
		void CompleteObject(mscorlib::System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete);
		void DoNewlyRegisteredObjectFixups(mscorlib::System::Runtime::Serialization::ObjectHolder* holder);
		mscorlib::System::Object* GetObject(int64_t objectID);
		void RegisterString(mscorlib::System::String* obj, int64_t objectID, mscorlib::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, mscorlib::System::Reflection::MemberInfo* member);
		void RegisterObject(mscorlib::System::Object* obj, int64_t objectID, mscorlib::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, mscorlib::System::Reflection::MemberInfo* member, IL2CPP::Array<int32_t>* arrayIndex);
		void CompleteISerializableObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static mscorlib::System::Reflection::RuntimeConstructorInfo* GetConstructor(mscorlib::System::RuntimeType* t);
		void DoFixups();
		void RegisterFixup(mscorlib::System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired);
		void RecordFixup(int64_t objectToBeFixed, mscorlib::System::Reflection::MemberInfo* member, int64_t objectRequired);
		void RecordDelayedFixup(int64_t objectToBeFixed, mscorlib::System::String* memberName, int64_t objectRequired);
		void RecordArrayElementFixup(int64_t arrayToBeFixed, IL2CPP::Array<int32_t>* indices, int64_t objectRequired);
		void RaiseDeserializationEvent();
		void AddOnDeserialization(mscorlib::System::Runtime::Serialization::DeserializationEventHandler* handler);
		void AddOnDeserialized(mscorlib::System::Object* obj);
		void RaiseOnDeserializedEvent(mscorlib::System::Object* obj);
		void RaiseOnDeserializingEvent(mscorlib::System::Object* obj);
	};
}

