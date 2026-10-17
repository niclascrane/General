# Solar system comparison — notes

Companion file: [Solar_System_Comparison.csv](./Solar_System_Comparison.csv)

## Monthly PV production estimates

The monthly values in the CSV are **rough screening estimates**, not a PVGIS simulation or a guarantee. They use a generic mainland-Portugal seasonal profile for an unshaded fixed array, scaled to the stated array size. Actual production depends on the exact site, roof/ground orientation and tilt, horizon/shading, inverter clipping, temperature, soiling, and system losses.

For a more accurate estimate, use the European Commission's PVGIS tool with the exact installation location, array orientation, tilt, and system-loss assumptions: https://re.jrc.ec.europa.eu/pvg_tools/en/

For the rows with unknown or unconfirmed PV capacity, monthly production is intentionally left blank or marked as unconfirmed.

## Generator compatibility

Do not assume that an inverter supports a generator merely because it is off-grid. Confirm the exact inverter model's AC-input voltage and frequency range, maximum input current, generator charging capability, and whether auto-start contacts/relay are supported. The generator must provide stable voltage and frequency and sufficient continuous power for household loads plus battery charging. Additional transfer switching, wiring, protection, or an auto-start module may be required.

## Comparison caveats

- Prices are indicative figures from the initial planning comparison, not verified live quotes.
- Confirm the exact model, included MPPT/controller, battery usable capacity, battery discharge limits, included cables/protection, and warranty terms with each seller.
- The Victron MultiPlus-II configuration requires a separate solar MPPT controller.
- System G and H have unresolved specifications; do not treat them as fully comparable until confirmed.
- The estimates do not yet account for your exact monthly consumption pattern or battery charge/discharge losses.
