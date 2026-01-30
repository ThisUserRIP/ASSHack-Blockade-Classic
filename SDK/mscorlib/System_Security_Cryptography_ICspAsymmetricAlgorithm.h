#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct CspKeyContainerInfo; };

namespace mscorlib::System::Security::Cryptography
{
	struct ICspAsymmetricAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* ExportCspBlob(bool includePrivateParameters);
		void ImportCspBlob(IL2CPP::Array<uint8_t>* rawData);
		mscorlib::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo();
	};
}

