#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };

namespace mscorlib::System::Resources
{
	struct ResourceFallbackManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::CultureInfo* m_startingCulture;
		mscorlib::System::Globalization::CultureInfo* m_neutralResourcesCulture;
		bool m_useParents;
		void _ctor(mscorlib::System::Globalization::CultureInfo* startingCulture, mscorlib::System::Globalization::CultureInfo* neutralResourcesCulture, bool useParents);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Globalization::CultureInfo>* GetEnumerator();
	};
}

