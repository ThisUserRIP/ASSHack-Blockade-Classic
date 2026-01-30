#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
namespace mscorlib::System::Runtime::Serialization { struct ISerializationSurrogate; };
namespace mscorlib::System::Runtime::Serialization { struct FixupHolderList; };
namespace mscorlib::System::Runtime::Serialization { struct LongList; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization { struct ValueTypeFixupInfo; };
namespace mscorlib::System::Runtime::Serialization { struct TypeLoadExceptionHolder; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectManager; };
namespace mscorlib::System::Runtime::Serialization { struct FixupHolder; };

namespace mscorlib::System::Runtime::Serialization
{
	struct ObjectHolder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* m_object;
		int64_t m_id;
		int32_t m_missingElementsRemaining;
		int32_t m_missingDecendents;
		mscorlib::System::Runtime::Serialization::SerializationInfo* m_serInfo;
		mscorlib::System::Runtime::Serialization::ISerializationSurrogate* m_surrogate;
		mscorlib::System::Runtime::Serialization::FixupHolderList* m_missingElements;
		mscorlib::System::Runtime::Serialization::LongList* m_dependentObjects;
		mscorlib::System::Runtime::Serialization::ObjectHolder* m_next;
		int32_t m_flags;
		bool m_markForFixupWhenAvailable;
		mscorlib::System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup;
		mscorlib::System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad;
		bool m_reachable;
		void _ctor(int64_t objID);
		void _ctor(mscorlib::System::Object* obj, int64_t objID, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, mscorlib::System::Reflection::FieldInfo* field, IL2CPP::Array<int32_t>* arrayIndex);
		void _ctor(mscorlib::System::String* obj, int64_t objID, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, mscorlib::System::Reflection::FieldInfo* field, IL2CPP::Array<int32_t>* arrayIndex);
		void IncrementDescendentFixups(int32_t amount);
		void DecrementFixupsRemaining(mscorlib::System::Runtime::Serialization::ObjectManager* manager);
		void RemoveDependency(int64_t id);
		void AddFixup(mscorlib::System::Runtime::Serialization::FixupHolder* fixup, mscorlib::System::Runtime::Serialization::ObjectManager* manager);
		void UpdateDescendentDependencyChain(int32_t amount, mscorlib::System::Runtime::Serialization::ObjectManager* manager);
		void AddDependency(int64_t dependentObject);
		void UpdateData(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainer, mscorlib::System::Reflection::FieldInfo* field, IL2CPP::Array<int32_t>* arrayIndex, mscorlib::System::Runtime::Serialization::ObjectManager* manager);
		void MarkForCompletionWhenAvailable();
		void SetFlags();
		bool get_IsIncompleteObjectReference();
		void set_IsIncompleteObjectReference(bool value);
		bool get_RequiresDelayedFixup();
		bool get_RequiresValueTypeFixup();
		bool get_ValueTypeFixupPerformed();
		void set_ValueTypeFixupPerformed(bool value);
		bool get_HasISerializable();
		bool get_HasSurrogate();
		bool get_CanSurrogatedObjectValueChange();
		bool get_CanObjectValueChange();
		int32_t get_DirectlyDependentObjects();
		int32_t get_TotalDependentObjects();
		bool get_Reachable();
		void set_Reachable(bool value);
		bool get_TypeLoadExceptionReachable();
		mscorlib::System::Runtime::Serialization::TypeLoadExceptionHolder* get_TypeLoadException();
		void set_TypeLoadException(mscorlib::System::Runtime::Serialization::TypeLoadExceptionHolder* value);
		mscorlib::System::Object* get_ObjectValue();
		void SetObjectValue(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::ObjectManager* manager);
		mscorlib::System::Runtime::Serialization::SerializationInfo* get_SerializationInfo();
		void set_SerializationInfo(mscorlib::System::Runtime::Serialization::SerializationInfo* value);
		mscorlib::System::Runtime::Serialization::ISerializationSurrogate* get_Surrogate();
		mscorlib::System::Runtime::Serialization::LongList* get_DependentObjects();
		void set_DependentObjects(mscorlib::System::Runtime::Serialization::LongList* value);
		bool get_RequiresSerInfoFixup();
		void set_RequiresSerInfoFixup(bool value);
		mscorlib::System::Runtime::Serialization::ValueTypeFixupInfo* get_ValueFixup();
		bool get_CompletelyFixed();
		int64_t get_ContainerID();
	};
}

