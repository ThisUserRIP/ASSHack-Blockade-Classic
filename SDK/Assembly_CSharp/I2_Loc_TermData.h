#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "I2_Loc_eTermType.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::I2::Loc
{
	struct TermData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Term;
		Assembly_CSharp::I2::Loc::eTermType TermType;
		mscorlib::System::String* Description;
		IL2CPP::Array<mscorlib::System::String*>* Languages;
		IL2CPP::Array<uint8_t>* Flags;
		IL2CPP::Array<mscorlib::System::String*>* Languages_Touch;
		mscorlib::System::String* GetTranslation(int32_t idx, mscorlib::System::String* specialization, bool editMode);
		void SetTranslation(int32_t idx, mscorlib::System::String* translation, mscorlib::System::String* specialization);
		void RemoveSpecialization(mscorlib::System::String* specialization);
		void RemoveSpecialization(int32_t idx, mscorlib::System::String* specialization);
		bool IsAutoTranslated(int32_t idx, bool IsTouch);
		void Validate();
		bool IsTerm(mscorlib::System::String* name, bool allowCategoryMistmatch);
		bool HasSpecializations();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetAllSpecializations();
		void _ctor();
	};
}

