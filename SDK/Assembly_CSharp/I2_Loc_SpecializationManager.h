#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I2_Loc_BaseSpecializationManager.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::I2::Loc
{
	struct SpecializationManager : Assembly_CSharp::I2::Loc::BaseSpecializationManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::I2::Loc::SpecializationManager* Singleton;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static mscorlib::System::String* GetSpecializedText(mscorlib::System::String* text, mscorlib::System::String* specialization);
		static mscorlib::System::String* SetSpecializedText(mscorlib::System::String* text, mscorlib::System::String* newText, mscorlib::System::String* specialization);
		static mscorlib::System::String* SetSpecializedText(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* specializations);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* GetSpecializations(mscorlib::System::String* text, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* buffer);
		static void AppendSpecializations(mscorlib::System::String* text, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* list);
		static void _cctor();
	};
}

