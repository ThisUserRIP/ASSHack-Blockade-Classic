#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerMapEnabler.h"
namespace Rewired_Core::Rewired { struct ControllerMapEnabler; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler_Rule; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired
{
	struct ControllerMapEnabler_RuleSet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _enabled;
		mscorlib::System::String* _tag;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* _rules;
		struct StaticFields
		{
			mscorlib::System::String* className;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_enabled();
		void set_enabled(bool value);
		mscorlib::System::String* get_tag();
		void set_tag(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* get_rules();
		void set_rules(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* value);
		void _ctor(bool enabled, mscorlib::System::String* tag, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* rules);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ControllerMapEnabler_RuleSet* source);
		Rewired_Core::Rewired::ControllerMapEnabler_Rule* Find(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* predicate);
		Rewired_Core::Rewired::ControllerMapEnabler_Rule* FindLast(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* predicate);
		int32_t FindIndex(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* predicate);
		int32_t FindLastIndex(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* predicate);
		int32_t IndexOf(Rewired_Core::Rewired::ControllerMapEnabler_Rule* item);
		void Insert(int32_t index, Rewired_Core::Rewired::ControllerMapEnabler_Rule* item);
		void RemoveAt(int32_t index);
		Rewired_Core::Rewired::ControllerMapEnabler_Rule* get_Item(int32_t index);
		void set_Item(int32_t index, Rewired_Core::Rewired::ControllerMapEnabler_Rule* value);
		void Add(Rewired_Core::Rewired::ControllerMapEnabler_Rule* item);
		void Clear();
		bool Contains(Rewired_Core::Rewired::ControllerMapEnabler_Rule* item);
		void CopyTo(IL2CPP::Array<Rewired_Core::Rewired::ControllerMapEnabler_Rule*>* array, int32_t arrayIndex);
		int32_t get_Count();
		bool System_Collections_Generic_ICollection_Rewired_ControllerMapEnabler_Rule__get_IsReadOnly();
		bool Remove(Rewired_Core::Rewired::ControllerMapEnabler_Rule* item);
		mscorlib::System::Collections::Generic::IEnumerator_1<Rewired_Core::Rewired::ControllerMapEnabler_Rule>* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone();
		void CheckList();
	};
}

