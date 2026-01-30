#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct Attribute; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_ComponentModel_AttributeCollection_AttributeEntry.h"
namespace System::System::ComponentModel { struct AttributeCollection_AttributeEntry; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct Array; };

namespace System::System::ComponentModel
{
	struct AttributeCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Attribute*>* _attributes;
		IL2CPP::Array<System::ComponentModel::AttributeCollection_AttributeEntry>* _foundAttributeTypes;
		int32_t _index;
		struct StaticFields
		{
			System::ComponentModel::AttributeCollection* Empty;
			mscorlib::System::Collections::Hashtable* _defaultAttributes;
			mscorlib::System::Object* internalSyncObject;
			int32_t FOUND_TYPES_LIMIT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		void _ctor();
		static System::ComponentModel::AttributeCollection* FromExisting(System::ComponentModel::AttributeCollection* existing, IL2CPP::Array<mscorlib::System::Attribute*>* newAttributes);
		IL2CPP::Array<mscorlib::System::Attribute*>* get_Attributes();
		int32_t get_Count();
		mscorlib::System::Attribute* get_Item(int32_t index);
		mscorlib::System::Attribute* get_Item(mscorlib::System::Type* attributeType);
		bool Contains(mscorlib::System::Attribute* attribute);
		bool Contains(IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		mscorlib::System::Attribute* GetDefaultAttribute(mscorlib::System::Type* attributeType);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		bool Matches(mscorlib::System::Attribute* attribute);
		bool Matches(IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		int32_t System_Collections_ICollection_get_Count();
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		static void _cctor();
	};
}

