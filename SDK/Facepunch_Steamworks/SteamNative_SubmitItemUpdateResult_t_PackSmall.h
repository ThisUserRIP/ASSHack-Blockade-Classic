#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SubmitItemUpdateResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SubmitItemUpdateResult_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SubmitItemUpdateResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		bool UserNeedsToAcceptWorkshopLegalAgreement;
		uint64_t PublishedFileId;
		static Facepunch_Steamworks::SteamNative::SubmitItemUpdateResult_t op_Implicit(Facepunch_Steamworks::SteamNative::SubmitItemUpdateResult_t_PackSmall d);
	};
}

