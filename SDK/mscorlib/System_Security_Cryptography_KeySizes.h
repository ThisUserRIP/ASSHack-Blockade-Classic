#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography { struct KeySizes; };

namespace mscorlib::System::Security::Cryptography
{
	struct KeySizes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_minSize;
		int32_t m_maxSize;
		int32_t m_skipSize;
		int32_t get_MinSize();
		int32_t get_MaxSize();
		int32_t get_SkipSize();
		void _ctor(int32_t minSize, int32_t maxSize, int32_t skipSize);
		bool IsLegal(int32_t keySize);
		static bool IsLegalKeySize(IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* legalKeys, int32_t size);
	};
}

