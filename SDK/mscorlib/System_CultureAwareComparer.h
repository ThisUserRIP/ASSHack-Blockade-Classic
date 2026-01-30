#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_StringComparer.h"
namespace mscorlib::System::Globalization { struct CompareInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Globalization_CompareOptions.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System
{
	struct CultureAwareComparer : mscorlib::System::StringComparer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::CompareInfo* _compareInfo;
		bool _ignoreCase;
		mscorlib::System::Globalization::CompareOptions _options;
		void _ctor(mscorlib::System::Globalization::CultureInfo* culture, bool ignoreCase);
		int32_t Compare(mscorlib::System::String* x, mscorlib::System::String* y);
		bool Equals(mscorlib::System::String* x, mscorlib::System::String* y);
		int32_t GetHashCode(mscorlib::System::String* obj);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

