#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizedString
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* mTerm;
		bool mRTL_IgnoreArabicFix;
		int32_t mRTL_MaxLineLength;
		bool mRTL_ConvertNumbers;
		bool m_DontLocalizeParameters;
		static mscorlib::System::String* op_Implicit(Assembly_CSharp::I2::Loc::LocalizedString s);
		static Assembly_CSharp::I2::Loc::LocalizedString op_Implicit(mscorlib::System::String* term);
		void _ctor(Assembly_CSharp::I2::Loc::LocalizedString str);
		mscorlib::System::String* ToString();
	};
}

